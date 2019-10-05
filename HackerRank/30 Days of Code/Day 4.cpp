class Person{
public:
   int age ;
   Person(int initialAge);
   void amIOld();
   void yearPasses();
};
Person::Person(int c){
  // Add some more code to run some checks on initialAge
    if (c < 0)
    {
        cout << "Age is not valid, setting age to 0.\n"; 
        age = 0;
    }
    else 
    {
        age = c;
    }
}
void Person::amIOld(){
    // Do some computations in here and print out the correct statement to the console 
    if (age < 13)
        {cout << "You are young.\n";}
    else if (age < 18)
        {cout << "You are a teenager.\n";}
    else
        {cout << "You are old.\n";}

}
    

void Person::yearPasses(){
  // Increment the age of the person in here
  age++;
}
