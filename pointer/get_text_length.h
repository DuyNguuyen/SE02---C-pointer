#ifndef GET_TEXT_LENGTH_H
#define GET_TEXT_LENGTH_H

int get_text_length()
{	
    char* a = new char[100];
    cout << "Text to find length: ";
    cin.getline(a, size_t(a));

    cout << "Length of your input text is: " << get_length(a);

    delete [] a;
    a = NULL;
    return 0;
}

#endif /* GET_TEXT_LENGTH_H */

