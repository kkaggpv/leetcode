class MovingAverage {
    queue<int> window;
    int size;
    int window_sum;
public:
    MovingAverage(int size) {
        this->size = size;
        this->window_sum = 0;
    }
    
    double next(int val) {
        if(window.size() == size) {
            window_sum -= window.front();
            window.pop();
        }
        window_sum += val;
        window.push(val);
        return (double) window_sum / window.size();
    }
};
