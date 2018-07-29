/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    stack<Interval> s;
    vector<Interval>::iterator it;
    int inserted=0,n=intervals.size()+1;
    for(int i=0;i<intervals.size();i++){
        if(intervals[i].start>=newInterval.start){
            it=intervals.begin()+i;
            intervals.insert(it,newInterval);
            inserted=1;
            break;
        }
    }
    if(inserted==0)
        intervals.push_back(newInterval);
    s.push(intervals[0]);
    for (int i = 1 ; i < n; i++){
        Interval top = s.top();
        if (top.end < intervals[i].start)
            s.push(intervals[i]);
        else if (top.end < intervals[i].end){
            top.end = intervals[i].end;
            s.pop();
            s.push(top);
        }
    }
    intervals.clear();
    stack<Interval> s1;
    while (!s.empty()){
        Interval t = s.top();
        s1.push(t);
        s.pop();
    }
    while (!s1.empty()){
        Interval t = s1.top();
        intervals.push_back(t);
        s1.pop();
    }
    return intervals;
}
