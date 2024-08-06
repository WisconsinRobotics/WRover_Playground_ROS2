# Message that represents IR sensor data as an array.
# The index of the array represents an angle from 0 to 180 (left to right).
# The value of the array is the distance to the target at that angle,
#   or infinity if the target is not at that angle.
float64[180] distances
