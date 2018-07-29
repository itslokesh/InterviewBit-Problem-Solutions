/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool comp(Interval a,Interval b){
    return a.start>b.start;
}
bool comp1(Interval a,Interval b){
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &intervals) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(intervals.begin(),intervals.end(),comp1);
    stack<Interval> s;
    s.push(intervals[0]);
    for(int i=1;i<intervals.size();i++){
        if(s.top().end<intervals[i].start)
            s.push(intervals[i]);
        else{
            s.top().end=max(s.top().end,intervals[i].end);
        }
    }
    vector<Interval> out;
    vector<Interval>::iterator it;
    for(int i=0;i<s.size();i++){
        out.insert(out.begin(),s.top());
        s.pop();
    }
    return out;
}
