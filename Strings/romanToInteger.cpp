int Solution::romanToInt(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    char one='I';
    char five='V';
    char ten='X';
    char fifty='L';
    char hundred='C';
    char fivehund='D';
    char thousand='M';
    int length=A.size();
    int i=0;
    int out=0;
    while(i<length){
        if(A[i]==thousand){
            while(i<length && A[i]==thousand){
                out+=1000;
                i++;
            }
        }
        if(i==length)
            break;
        else if(i<length-1 && A[i]==hundred && A[i+1]==thousand){
            out+=900;
            i+=2;
        }
        else if(A[i]==fivehund){
            out+=500;
            i++;
        }
        else if(i<length-1 && A[i]==hundred && A[i+1]==fivehund){
            out+=400;
            i+=2;
        }
        else if(A[i]==hundred){
            while(i<length && A[i]==hundred){
                out+=100;
                i++;
            }
        }
        else if(i<length-1 && A[i]==ten && A[i+1]==hundred){
            out+=90;
            i+=2;
        }
        else if(A[i]==fifty){
            out+=50;
            i++;
        }
        else if(i<length-1 && A[i]==ten && A[i+1]==fifty){
            out+=40;
            i+=2;
        }
        else if(A[i]==ten){
            while(i<length && A[i]==ten){
                out+=10;
                i++;
            }
        }
        else if(i<length-1 && A[i]==one && A[i+1]==ten){
            out+=9;
            i+=2;
        }
        else if(A[i]==five){
            out+=5;
            i++;
        }
        else if(i<length-1 && A[i]==one && A[i+1]==five){
            out+=4;
            i+=2;
        }
        else if(A[i]==one){
            while(i<length && A[i]==one){
                out+=1;
                i++;
            }
        }
    }
    return out;
}
