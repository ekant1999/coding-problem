using namespace std;

class MinMaxStack {
public:
    vector<int> stack;
    vector<pair<int, int>> min_max;
    int small = INT_MAX, large = INT_MIN;
  int peek() {
    return stack.size() == 0 ? -1: stack[stack.size()-1];
  }
  int pop() {
    int num = peek();
    stack.pop_back();
    min_max.pop_back();
    return num;
  }

  void push(int number) {
		if(stack.size() == 0) {
        small = number;
        large = number;
    }
		else{
			small = min(min_max[min_max.size()-1].first, number);
    large = max(min_max[min_max.size()-1].second, number);
		}
    stack.push_back(number);
    min_max.push_back({small, large});
  }

  int getMin() {
    return min_max.size() == 0 ? -1 : min_max[min_max.size()-1].first;
  }

  int getMax() {
    return min_max.size() == 0 ? -1 : min_max[min_max.size()-1].second;
  }
};
