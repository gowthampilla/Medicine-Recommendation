#include <stdio.h>
#include <string.h>

// Structure to hold medicine details
typedef struct {
    char symptom[50];
    char medicine[50];
    char precaution[100];
} Medicine;

int main() {
    Medicine medicines[50] = {
        {"fever", "Paracetamol", "Stay hydrated and rest."},
        {"headache", "Ibuprofen", "Avoid bright lights and get some rest."},
        {"cold", "Cetirizine", "Drink warm fluids and rest."},
        {"cough", "Dextromethorphan", "Drink warm water and avoid cold air."},
        {"sore throat", "Lozenges", "Gargle with salt water and rest your voice."},
        {"allergy", "Loratadine", "Avoid allergens and use an air purifier."},
        {"stomach ache", "Antacid", "Avoid spicy foods and eat light meals."},
        {"vomiting", "Ondansetron", "Stay hydrated and avoid solid foods temporarily."},
        {"diarrhea", "Loperamide", "Drink oral rehydration solution (ORS)."},
        {"constipation", "Lactulose", "Increase fiber intake and stay hydrated."},
        {"muscle pain", "Diclofenac", "Rest the muscle and apply ice."},
        {"joint pain", "Naproxen", "Avoid strenuous activity and apply heat."},
        {"toothache", "Ibuprofen", "Rinse mouth with warm salt water."},
        {"acid reflux", "Omeprazole", "Avoid spicy foods and eat smaller meals."},
        {"hypertension", "Amlodipine", "Limit salt intake and monitor BP."},
        {"diabetes", "Metformin", "Monitor blood sugar levels regularly."},
        {"asthma", "Salbutamol", "Avoid allergens and use inhaler if needed."},
        {"skin rash", "Hydrocortisone", "Avoid irritants and keep skin moisturized."},
        {"insomnia", "Melatonin", "Maintain a regular sleep schedule."},
        {"anxiety", "Diazepam", "Practice deep breathing exercises."},
        {"depression", "Fluoxetine", "Maintain regular counseling sessions."},
        {"flu", "Oseltamivir", "Rest and stay hydrated."},
        {"migraine", "Sumatriptan", "Avoid triggers like caffeine."},
        {"bronchitis", "Amoxicillin", "Stay warm and drink fluids."},
        {"pneumonia", "Azithromycin", "Get plenty of rest and fluids."},
        {"sinusitis", "Pseudoephedrine", "Use steam inhalation."},
        {"ear infection", "Amoxicillin", "Keep ears dry."},
        {"urinary infection", "Ciprofloxacin", "Drink cranberry juice."},
        {"acne", "Clindamycin", "Wash face regularly."},
        {"eczema", "Tacrolimus", "Avoid harsh soaps."},
        {"arthritis", "Methotrexate", "Exercise regularly."},
        {"gout", "Allopurinol", "Avoid red meat and alcohol."},
        {"menstrual pain", "Mefenamic Acid", "Use a heating pad."},
        {"thyroid disorder", "Levothyroxine", "Follow dosage instructions."},
        {"anemia", "Ferrous Sulfate", "Eat iron-rich foods."},
        {"dizziness", "Betahistine", "Sit or lie down."},
        {"vertigo", "Cinnarizine", "Avoid sudden head movements."},
        {"chest pain", "Aspirin", "Seek medical attention immediately."},
        {"palpitations", "Propranolol", "Practice stress-relief techniques."},
        {"nausea", "Domperidone", "Avoid strong odors."},
        {"sunburn", "Aloe Vera", "Apply cool compresses."},
        {"cuts", "Antiseptic Cream", "Clean the wound properly."},
        {"burns", "Silver Sulfadiazine", "Run under cool water immediately."},
        {"insect bite", "Calamine Lotion", "Avoid scratching."},
        {"food poisoning", "ORS and Ciprofloxacin", "Stay hydrated."},
        {"dehydration", "ORS", "Drink fluids regularly."},
        {"eye infection", "Chloramphenicol", "Avoid touching eyes."},
        {"mouth ulcer", "Chlorhexidine Gel", "Avoid spicy foods."}
    };

    char input[50];
    printf("Enter your symptom: ");
    scanf("%49s", input);

    // Convert input to lowercase for case-insensitive matching
    for (int i = 0; input[i]; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] += 32;
        }
    }

    int found = 0;
    for (int i = 0; i < 50; i++) {
        if (strcmp(input, medicines[i].symptom) == 0) {
            printf("\nRecommended Medicine: %s\n", medicines[i].medicine);
            printf("Precaution: %s\n", medicines[i].precaution);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nNo medicine found for the entered symptom. Please consult a doctor.\n");
    }

    return 0;
}
