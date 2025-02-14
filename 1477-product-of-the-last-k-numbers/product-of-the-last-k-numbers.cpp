class ProductOfNumbers {
    private:
    vector<int> result;
    public:
        ProductOfNumbers() : result{1} {}
        
        void add(int num) {
            if (num == 0)
                result = {1};
            else
                result.push_back(result.back() * num);
        }
        
        int getProduct(int k) {
            return k >= result.size() ? 0 : result.back() / result[result.size() - k - 1];
            
        }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */