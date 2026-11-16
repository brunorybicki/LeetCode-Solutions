class Solution:
    def average(self, salary: List[int]) -> float:
        sum, minSalary, maxSalary = 0, salary[0], salary[0]

        for i in range(len(salary)):
            sum += salary[i]

            if salary[i] < minSalary:
                minSalary = salary[i]

            if salary[i] > maxSalary:
                maxSalary = salary[i]

        return (sum - minSalary - maxSalary) / (len(salary) - 2)
