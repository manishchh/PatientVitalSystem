# Patient Vitals Management System

## 📖 Overview
The **Patient Vitals Management System** is a C++ application designed to monitor patient health vitals and raise alerts depending on the diseases they have been diagnosed with.  

The system evaluates the following vitals:
- Heart Rate (HR)  
- Oxygen Saturation (SpO₂)  
- Body Temperature (BT)  
- Brain Activity (BA)  

Based on disease-specific thresholds, the system assigns one of four alert levels:  
🟢 Green → 🟡 Yellow → 🟠 Orange → 🔴 Red.  

If a patient reaches a **Red alert level**, hospitals and GPs are notified immediately.  

This project was university project to demonstrate use of pointers and the use of multiple design patterns in a healthcare context.

---

## 🎯 Features
- Load patient data from a file (`patients.txt`).  
- Record new vitals through a command-line interface.  
- Dynamically calculate alert levels for one or more diseases.  
- Notify hospitals and GPs automatically when critical alerts occur.  
- Extensible design using modern **C++ OOP** and **design patterns**.  
- Includes a compiled **`.exe` executable** for quick testing.

---

## 🛠️ Design Patterns Used
This project implements **four key design patterns**:

1. **Strategy Pattern**  
   - Calculates patient alert levels depending on their primary disease.  
   - Each disease has its own alert algorithm encapsulated as a strategy.  

2. **Composite Pattern**  
   - Handles patients with multiple diseases.  
   - Ensures the system selects the **highest alert level** across all diseases.  

3. **Adapter Pattern**  
   - Integrates the `PatientFileLoader` into the system.  
   - Makes it easy to switch between file-based and database-based patient loading.  

4. **Observer Pattern**  
   - Notifies hospitals and GPs when a patient’s alert level reaches **Red**.  
   - Decouples alert calculation from external notifications.  

---

## ⚙️ How It Works
1. Patient data is loaded from `patients.txt`.  
2. Users can record new vitals for a patient.  
3. The system calculates the alert level based on thresholds for their disease(s).  
4. If multiple diseases exist, the **highest alert level** is applied.  
5. If the alert level is **Red**, notifications are immediately sent to hospitals and GPs.  
6. Patients’ vitals and alerts are displayed in a command-line interface.

<img width="887" height="466" alt="image" src="https://github.com/user-attachments/assets/e64429b8-772c-4707-8f21-64d3f8f12c69" />

