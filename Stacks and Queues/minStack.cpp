stack<int> s;
int min1;
MinStack::MinStack() {
    min1=-1;
    stack<int> temp;
    swap(s,temp);
}

void MinStack::push(int x) {
        if(s.empty()){
            s.push(x);
            min1=x;
        }
        else{
            if(x<min1){
                s.push(2*x-min1);
                min1=x;
            }
            else{
                s.push(x);
            }
        }
    }

void MinStack::pop() {
    if(s.empty())
        return;
    else{
        if(s.top()>=min1){
            s.pop();
        }
        else{
            min1=2*min1-s.top();
            s.pop();
        }
    }
    return;
}

int MinStack::top() {
    if(s.empty())
        return -1;
    if(s.top()>min1)
        return s.top();
    return min1;
}

int MinStack::getMin() {
    if(s.empty())
        return -1;
    return min1;
}

