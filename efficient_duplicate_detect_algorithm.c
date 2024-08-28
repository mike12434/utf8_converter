//More efficient duplicate detect algorithm


/*
Basic Idea:
data = {3, 1, 0, 2}
seen = {f, f, f, f}
seen = {f, f, f, t}
seen = {f, t, f, t}


Pseudocode:

bool has_duplicates(a, n)
{
    allocate "seen" array
    for each element in a{
        if(seen[a[i]] == true)
        {
            return true
        }
        set seen[a[i]]  true
    }
    return false;

}


The amount of time it takes is proportional to: N, the length of the data array

The amount of extra storage (beyond that needed for the array itsef) is: proportional to the length of the array, N

What if the values ranged from 0 to N^2? More storage but time complexity is the same

*/