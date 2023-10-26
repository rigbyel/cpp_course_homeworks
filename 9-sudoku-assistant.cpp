#include <iostream>
#include <vector>
#include <set>

std::vector<std::vector<int>> get_comb(std::vector<int> nums, int start, int S) {
    std::vector<std::vector<int>> combs {};
    
    if (start == nums.size() - 1) {
        if (nums[start] == S) {
            combs.push_back({nums[start]});
        }
        return combs;
    }
    for (int i = start;  i < nums.size(); i++) {
        std::vector<std::vector<int>> temp {};
        if (S > nums[i] & i != nums.size()) {
            temp = get_comb(nums, i+1, S - nums[i]);
        }
        if (S == nums[i]) {
            combs.push_back({nums[i]});
        }

        for (std::vector<int> item : temp) {
            if (item.size() != 0) {
                item.push_back(nums[i]);
                combs.push_back(item);
            }
        }
    }
    return combs;
}

std::vector<int> get_allowed_numbers(std::set<int> forbidden_nums, int max_num) {
    std::vector<int> nums;
    for (int i = 1; i <= max_num; i++ ) {
        if (!forbidden_nums.count(i)) {
            nums.push_back(i);
        }
    }
    return nums;
}

int main() {
    int N, S;
    std::cin >> S;
    std::cin >> N;

    std::set<int> forbidden_nums;
    for (int i = 0; i < N; i++) {
        int num;
        std::cin >> num;
        forbidden_nums.insert(num);
    }
    
    std::vector<int> numbers = get_allowed_numbers(forbidden_nums, 9);

    std::vector<std::vector<int>> combintaions;
    combintaions = get_comb(numbers, 0, S);

    if (combintaions.size() == 0 ) {
        std::cout << "Нет подходящих комбинаций" << std::endl;
        return 0;
    }
    
    for (std::vector<int> c : combintaions) {
        for (int num : c) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
