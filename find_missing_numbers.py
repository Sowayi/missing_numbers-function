# function receives two lists as arguments

def find_missing_numbers(list_1,list_2):

    """using the sorted() function form the python standard python library, retuns
    values in ascending order"""

     sorted_list_1= sorted(list_1)

     sorted_list_2= sorted(list_2)

     #comparing the two sorted lists to check whether they have the same values

    if sorted_list_1 == sorted_list_2 :

        return 0

    else:

        for x in set(sortedlist_2) - set (sorted_list_1):

            return x


