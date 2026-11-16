class Solution {
public:
    double average(vector<int>& salary) {
        int sum = 0, minSalary = salary[0], maxSalary = salary[0];

        for (int i = 0; i < salary.size(); i++) {
            sum += salary[i];

            if (salary[i] < minSalary) {
                minSalary = salary[i];
            }

            if (salary[i] > maxSalary) {
                maxSalary = salary[i];
            }
        }

        return (double) (sum - minSalary - maxSalary) / (salary.size() - 2);
    }
};
