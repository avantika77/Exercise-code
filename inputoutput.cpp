//input output 
//iostream = input and output streams     
//stram=sequence of bytes and characters
/*cin=istream
  cout=ostream
  cerr=ostream
   clog=ostream*/
   // NOTE: cin and cout are predefined objects
   // cout << {insertion operator}
   // cin << {extrction operator}

   #include<iostream>  // inbuidstream 
   using namespace std; // namespace , contains declaration of class ,objects etc. 
   int main()
{
    int a;
    cout << "Enter your age: " << endl;
    cin >> a;
    if (a<=0)
    {
    cout << "Invalid age: " << endl;
    }
    else if (a<=18)
     {
        cout<<"Your age IS LESS THAN 18 / NOT eligible to vote." << endl;
     }
    else
    cout<<"Your are eligible to vote. Get your voter ID." ;
}