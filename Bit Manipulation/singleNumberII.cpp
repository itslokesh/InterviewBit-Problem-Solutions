int Solution::singleNumber(const vector<int> &arr) {
   int ones = 0, twos = 0 ;
 
    int common_bit_mask;
    int n=arr.size();
    for( int i=0; i< n; i++ )
    {
        twos  = twos | (ones & arr[i]);
        ones  = ones ^ arr[i];
        common_bit_mask = ~(ones & twos);
        ones &= common_bit_mask;
        twos &= common_bit_mask;
    }
 
    return ones;
}
