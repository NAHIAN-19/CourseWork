import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler, LabelEncoder
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Dropout
from tensorflow.keras.callbacks import EarlyStopping

# Load Dataset
def load_data():
    df = pd.read_csv("train.csv", usecols=["Survived", "Pclass", "Sex", "Age", "SibSp", "Parch", "Fare", "Embarked"])
    df.dropna(inplace=True)  # Drop rows with missing values
    return df

# Preprocess Data
def preprocess_data(df):
    # Encode categorical variables
    df['Sex'] = LabelEncoder().fit_transform(df['Sex'])
    df['Embarked'] = df['Embarked'].fillna('S')  # Fill missing 'Embarked' values with the most common value
    df['Embarked'] = LabelEncoder().fit_transform(df['Embarked'])

    # Define features and target
    X = df.drop("Survived", axis=1)
    y = df["Survived"]

    # Standardize features
    scaler = StandardScaler()
    X_scaled = scaler.fit_transform(X)

    return train_test_split(X_scaled, y, test_size=0.2, random_state=42)

# Build MLP Model
def build_model(input_dim):
    model = Sequential([
        Dense(64, activation='relu', input_dim=input_dim),
        Dropout(0.2),  # Dropout for regularization
        Dense(32, activation='relu'),
        Dense(1, activation='sigmoid')  # Binary classification
    ])
    model.compile(optimizer='adam', loss='binary_crossentropy', metrics=['accuracy'])
    return model

# Main Execution
if __name__ == "__main__":
    # Load and preprocess data
    data = load_data()
    X_train, X_test, y_train, y_test = preprocess_data(data)

    # Build and train model
    model = build_model(X_train.shape[1])
    early_stopping = EarlyStopping(monitor='val_loss', patience=5, restore_best_weights=True)

    history = model.fit(
        X_train, y_train,
        validation_split=0.2,
        epochs=50,
        batch_size=32,
        callbacks=[early_stopping],
        verbose=1  # Set to 1 for progress bar; 2 for epoch summaries
    )

    # Evaluate Model
    loss, accuracy = model.evaluate(X_test, y_test, verbose=0)
    print(f"Test Accuracy: {accuracy * 100:.2f}%")

    # Save Model
    model.save("titanic_mlp_model.h5")
