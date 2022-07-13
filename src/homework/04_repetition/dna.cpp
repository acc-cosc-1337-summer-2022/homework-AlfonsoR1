//add include statements
#include "dna.h"
//add function(s) code here

double get_gc_content(const std::string & dna)
{
    char C = 'C';
    char G = 'G';
    int total_C = std::count(dna.begin(), dna.end(), C);
    int total_G = std::count(dna.begin(), dna.end(), G);
    int total_CG =total_C + total_G;

    double string_length = dna.size();

    double percent = total_CG/ string_length;

    return percent;  
}

std :: string get_reverse_string(std::string dna)
{
    std::string d;
    for (int i = dna.size() - 1; i >= 0; i--) {
        d = d.append(1, dna[i]);
    };
    return d;
}


std :: string get_dna_complement(std::string dna)
{
    std :: string re;
    re = get_reverse_string(dna);
    for( unsigned int i = 0; i < re.size();i++)
    {
        if(re[i] == 'A')
            re[i] = 'T';
        else if(re[i] == 'T')
             re[i] = 'A';
        else if(re[i] == 'G')
             re[i] = 'C';
        else if(re[i] == 'C')
            re[i] = 'G'; 
    }
    return re;
}




