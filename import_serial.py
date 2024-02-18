import serial
import time

# Configuration
serial_port = 'COM7'  # Adjust this to your Arduino's serial port
baud_rate = 9600  # Match this to your Arduino's configured baud rate
file_path = 'C:/Users/kelly\Downloads/text2touch.txt'  # Path to your .txt file

# Open the serial connection
ser = serial.Serial(serial_port, baud_rate, timeout=1)
time.sleep(2)  # Allow some time for the Arduino to reset

# Read and send the file contents
with open(file_path, 'r') as file:
    for line in file:
        for char in line:
            ser.write(char.encode())  # Send each character
            time.sleep(0.1)  # Short delay between characters

# Close the serial connection
ser.close()
