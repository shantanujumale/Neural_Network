# target  = 22.0
# room_temp = 20.0
# heater_setting = 5.0
# learning_rate = 0.1
# x = 1

# #simultion parameter

# max_iterations = 20 #max step of run

# print("step | Room temp | Heater | New Heter setting" )
# print("-"*70)

# for step in range(1,max_iterations+1):
#     #step 1 :calculate error
#     error = target - room_temp

#     #step 2 : update heater setting
#     delta_w = learning_rate * error *x
#     heater_setting += delta_w

#     #step 3 : Approximation new room temperature
#     #using scaling factor to show effect of heater(for sumulation purpose)
#     room_temp +=delta_w * 5

#     if abs(target - room_temp) < 0.01:
#         room_temp = target
#     print(f"{step:4d} | {room_temp:10.2f} | {error:6.2f} | {heater_setting:18.2f}")

#     if room_temp == target:
#         break


# ----------------------------------------------------------------------

# Program Throwing a paper into a Trash can

# target_distance = 3.0
# throw_strenght = 2.0
# learning_rate = 0.2
# input_strenght = 1.0
# num_throws = 30

# #simultion parameter

# max_iterations = 20 #max step of run

# print("step | Target Distance | Throw Strength | New Throw Strength" )
# print("-"*70)

# for step in range(1,max_iterations+1):
#     #step 1 :calculate error    
#     error = target_distance - throw_strenght

#     #step 2 : update throw strength
#     delta_w = learning_rate * error * input_strenght
#     throw_strenght += delta_w

#     if abs(target_distance - throw_strenght) < 0.01:
#         throw_strenght = target_distance
#     print(f"{step:4d} | {target_distance:15.2f} | {error:14.2f} | {throw_strenght   :18.2f}")

#     if throw_strenght == target_distance:
#         break


# ----------------------------------------------------------------------

# Setting Alarm volume

target_volume = 0.7
current_volume = 0.0
learning_rate = 0.1
input_volume = 1.0









# ----------------------------------------------------------------------

# Pouring water into a glass

#paramter

# target_volume = 250.0
# hand_tilt = 0.0
# learning_rate = 0.1
# input_tilt = 1.0
# num_pours = 30
# tolerance = 0.1


# # Pouring water into a glass (feedback control simulation)

# target_volume = 250.0   # ml
# current_volume = 0.0    # ml
# hand_tilt = 0.5         # initial tilt
# learning_rate = 0.05
# tolerance = 0.1

# max_steps = 50

# print("Step | Volume(ml) | Error | Hand Tilt")
# print("-"*45)

# for step in range(1, max_steps + 1):

#     # error calculation
#     error = target_volume - current_volume

#     # control update (tilt adjustment)
#     delta_tilt = learning_rate * error
#     hand_tilt += delta_tilt

#     # physical constraint
#     if hand_tilt < 0:
#         hand_tilt = 0
#     if hand_tilt > 10:
#         hand_tilt = 10

#     # environment model (flow rate depends on tilt)
#     flow_rate = hand_tilt * 2.0   # ml per step (fake physics model)
#     current_volume += flow_rate

#     print(f"{step:4d} | {current_volume:10.2f} | {error:6.2f} | {hand_tilt:9.2f}")

#     if abs(error) <= tolerance:
#         print("Target volume reached.")
#         break


# ----------------------------------------------------------------------

# Context: Memory-Based Learning Example

#step 1: Stored memory 
memory = {
    90 : "A",
    75 : "B",
    60 : "C"
}

# step 2: new input

new_marks = int(input("Enter new marks: "))

# step 3 : Find the closest marks in memory

closest_marks = None
min_distance = float('inf')

for marks in memory:
    distance = abs(new_marks - marks)
    if distance <min_distance:
        min_distance = distance
        closest_marks = marks

# step 4 : Predict output

predicted_grade = memory[closest_marks]

#display result
print("memorry_Based learning Example")
print("-"*40)
print("stored memory:",memory)
print(f"New Marks: {new_marks}")
print(f"Closest Marks in Memory: {closest_marks}")
print(f"Predicted Grade: {predicted_grade}")















