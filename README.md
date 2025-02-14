# Medicine Recommendation System in C

This project implements a simple medicine recommendation system in C. The system suggests medicines and precautions based on user-input symptoms.

## Features
- Predefined list of 50 common symptoms with associated medicines and precautions.
- Case-insensitive symptom matching.
- Easy-to-use interface with clear recommendations.

## How to Run
1. Compile the program using a C compiler (e.g., `gcc`).
2. Run the executable file.

### Compilation Command
```bash
gcc -o medicine_recommender medicine_recommendation.c
```

### Run Command
```bash
./medicine_recommender
```

## Usage
1. The program will prompt you to enter a symptom.
2. Enter a symptom (e.g., `fever`, `cold`, `headache`).
3. The program will display the recommended medicine and relevant precautions.
4. If the symptom is not found, the program will advise consulting a doctor.

## Example
```
Enter your symptom: fever

Recommended Medicine: Paracetamol
Precaution: Stay hydrated and rest.
```

## Medicine List Examples
- fever: Paracetamol
- headache: Ibuprofen
- cold: Cetirizine
- cough: Dextromethorphan
- sore throat: Lozenges

... and many more.

## Notes
- This program is for educational purposes only.
- Always consult a healthcare professional for medical advice.

## License
MIT License
