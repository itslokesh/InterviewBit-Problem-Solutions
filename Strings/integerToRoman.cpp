string Solution::intToRoman(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string one="I";
    string five="V";
    string ten="X";
    string fifty="L";
    string hundred="C";
    string fivehund="D";
    string thousand="M";
    string out;
    while(A>0){
        while(A>=1000){
            out=out+thousand;
            A-=1000;
        }
        if(A>=900){
            out=out+hundred+thousand;
            A-=900;
        }
        else if(A>=500){
            out=out+fivehund;
            A-=500;
        }
        else if(A>=400){
            out=out+hundred+fivehund;
            A-=400;
        }
        else if(A>=100){
            while(A>=100){
                out=out+hundred;
                A-=100;
            }
        }
        else if(A>=90){
            out=out+ten+hundred;
            A-=90;
        }
        else if(A>=50){
            out=out+fifty;
            A-=50;
        }
        else if(A>=40){
            out=out+ten+fifty;
            A-=40;
        }
        else if(A>=10){
            while(A>=10){
                out=out+ten;
                A-=10;
            }
        }
        else if(A==9){
            out=out+one+ten;
            A-=10;
        }
        else if(A>=5){
            out=out+five;
            A-=5;
        }
        else if(A==4){
            out=out+one+five;
            A-=4;
        }
        else if(A>=1){
            out=out+one;
            A--;
        }
    }
    return out;
}
