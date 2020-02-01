vector<int> gradingStudents(vector<int> grades)
{
    for(int i=0; i<grades.size(); ++i)
    {
        if(grades[i] < 38)
            continue;
        
        int multiple = 5 * (grades[i]/5 + 1);

        if(multiple-(grades[i]) < 3)
            grades[i]=multiple; 
    }
    return grades;
}