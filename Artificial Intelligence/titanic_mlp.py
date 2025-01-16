import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neural_network import MLPClassifier
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix

# Load the Titanic dataset from a URL
url = "https://web.stanford.edu/class/archive/cs/cs109/cs109.1166/stuff/titanic.csv"
data = pd.read_csv(url)

# Select relevant features and target variable
features = ['Pclass', 'Sex', 'Age', 'Fare']
X = data[features].copy()
y = data['Survived']

# Preprocess the data
# Handle missing values in 'Age' column by filling with median
X['Age'].fillna(X['Age'].median(), inplace=True)
# Convert 'Sex' to numerical values (0 for male, 1 for female)
X['Sex'] = X['Sex'].map({'male': 0, 'female': 1})

# Split the data into training and testing sets (80% train, 20% test)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Scale the features to have zero mean and unit variance
scaler = StandardScaler()
X_train_scaled = scaler.fit_transform(X_train)
X_test_scaled = scaler.transform(X_test)

# Build and train the Multi-Layer Perceptron model
# Architecture: 4 input neurons, 16 neurons in first hidden layer, 8 neurons in second hidden layer
model = MLPClassifier(hidden_layer_sizes=(16, 8), max_iter=1000, random_state=42)
model.fit(X_train_scaled, y_train)

# Make predictions on the test set
y_pred = model.predict(X_test_scaled)

# Print results
print(f"Accuracy: {accuracy_score(y_test, y_pred):.4f}")
print("\nClassification Report:")
print(classification_report(y_test, y_pred))
print("\nConfusion Matrix:")
print(confusion_matrix(y_test, y_pred))