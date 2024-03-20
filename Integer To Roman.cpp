string Solution::intToRoman(int A) {
    string str="";
    while(A>0){
        if(A>=1000){
            str = str + "M";
            A-=1000;
        }
        else if(A>=900){
            str = str + "CM";
            A-=900;
        }
        else if(A>=600){
            str = str + "DC";
            A-=600;
        }
        else if(A>=500){
            str = str + "D";
            A-=500;
        }
        else if(A>=400){
            str = str + "CD";
            A-=400;
        }
        else if(A>=100){
            str = str + "C";
            A-=100;
        }
        else if(A>=90){
            str = str + "XC";
            A-=90;
        }
        else if(A>=50){
            str = str + "L";
            A-=50;
        }
        else if(A>=40){
            str = str + "XL";
            A-=40;
        }
        else if(A>=10){
            str = str + "X";
            A-=10;
        }
        else if(A==9){
            str = str + "IX";
            A-=9;
        }
        else if( A>=5){
            str = str + "V";
            A-=5;
        }
        else if( A==4){
            str = str + "IV";
            A-=4;
        }
         else if( A==3){
            str = str + "III";
            A-=3;
        }
         else if( A==2){
            str = str + "II";
            A-=3;
        }
         else if( A==1){
            str = str + "I";
            A-=3;
        }
        
    }

    return str ;
}
