from tensorflow.keras.models import load_model
import numpy as np

# Load the saved model
model = load_model("titanic_mlp_model.h5")

# Example new data (Replace with actual test data)
# Format: ['Pclass', 'Sex', 'Age', 'SibSp', 'Parch', 'Fare', 'Embarked']
sample_data = np.array([[3, 1, 22.0, 1, 0, 7.25, 2]])  # Example passenger data

# Scale data like the training data
from sklearn.preprocessing import StandardScaler

scaler = StandardScaler()
scaled_sample = scaler.fit_transform(sample_data)

# Predict survival probability
survival_probability = model.predict(scaled_sample)

# Print result
print(f"Survival Probability: {survival_probability[0][0]:.2f}")
print("Prediction: Survived" if survival_probability[0][0] >= 0.5 else "Prediction: Did not survive")
