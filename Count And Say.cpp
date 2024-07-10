string Solution::countAndSay(int A) {
string temp = "1";

for (int i = 0; i < A-1; i++) {

string ans = "";

int j = 0;
int n = temp.size();

while (j < n) {
int count = 1;

while ((j + 1 < n) && (temp[j] == temp[j + 1]) ) {
count++;
j++;
}
ans += to_string(count) + temp[j];

j++;
}

temp = ans;
}

return temp;

}
