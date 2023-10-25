def minimum_difference(N, M, K):
  """Calculates the minimum possible difference between the number of avocados
  and dragon fruits that Caleb can achieve.

  Args:
    N: The number of avocados that Caleb has.
    M: The number of dragon fruits that Caleb has.
    K: The maximum number of fruits that Caleb can buy.

  Returns:
    The minimum possible difference between the number of avocados and dragon fruits.
  """

  # Calculate the initial difference between the number of avocados and dragon fruits.
  difference = abs(N - M)

  # If the difference is 0, then Caleb is already happy and we can return 0.
  if difference == 0:
    return 0

  # Start by buying avocados.
  num_avocados = 0
  while difference > 0 and num_avocados < K:
    difference -= 1
    num_avocados += 1

  # If the difference is still not 0, then start buying dragon fruits.
  num_dragon_fruits = 0
  while difference > 0 and num_dragon_fruits < K:
    difference -= 1
    num_dragon_fruits += 1

  # Return the final difference.
  return difference


# Test cases.
print(minimum_difference(5, 8, 2))  # -1
print(minimum_difference(10, 7, 30))  # 1
print(minimum_difference(20, 5, 105))  # 0