#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) 
{
    std::vector<int> vecStudentScores {};

    for(double score : student_scores)
        {
            vecStudentScores.emplace_back(static_cast<int>(score));
        }
    
    return vecStudentScores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) 
{
    int iFailedCount {};

    for(int score : student_scores)
        {
            if(score <= 40)
            {
                iFailedCount++;
            }
        }
    
    return iFailedCount;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) 
{
    std::array<int, 4> aGrades {};
    
    if(highest_score > 41)
    {
        const double dGradiant {((highest_score - 40.0) / 4.0)};

        for(int i = 0; i < aGrades.size(); i++)
            {
                aGrades[i] = static_cast<int>(41 + (i * dGradiant));
            }
    }
    
    return aGrades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) 
{
    std::vector<std::string> vecStudentGrades {};

    if(student_scores.size() == student_names.size())
    {
        for(int i = 0; i < student_names.size(); i++)
            {
                vecStudentGrades.emplace_back(std::to_string(i + 1) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i)));
            }
    }
    
    return vecStudentGrades;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) 
{ 
    std::string sName {};
    
    if( !student_scores.empty() && !student_names.empty())
    {
        for(int i = 0; i < student_scores.size(); i++)
            {
                if (student_scores.at(i) == 100)
                {
                    sName = student_names.at(i);
                    break;
                }
            }
    }
    return sName;
}
