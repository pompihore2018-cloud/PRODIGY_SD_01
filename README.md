# PRODIGY_SD_01
A simple temperature conversion program in C that converts Celsius, Fahrenheit, and Kelvin.
# PRODIGY_SD_01

## 🌡️ Temperature Conversion Program (C Language)

This project is a simple temperature conversion program developed in **C language** as part of **Prodigy Infotech – Task 01**.

The program converts temperature values between:
- Celsius (°C)
- Fahrenheit (°F)
- Kelvin (K)

---

## 🧩 Features

- Menu-based user interaction (GUI-style in terminal)
- Takes temperature value and unit as input
- Converts the temperature into the other two units
- Beginner-friendly and easy to understand
- Written in pure C 

---

## 🔄 Conversion Formulas Used

- Celsius → Fahrenheit: `(C × 9/5) + 32`
- Celsius → Kelvin: `C + 273.15`
- Fahrenheit → Celsius: `(F − 32) × 5/9`
- Kelvin → Celsius: `K − 273.15`

---

## ▶️ How to Run the Program

### Step 1: Compile
```bash
gcc temperature_converter.c -o temperature
