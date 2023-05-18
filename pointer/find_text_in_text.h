#ifndef FIND_TEXT_IN_TEXT_H
#define FIND_TEXT_IN_TEXT_H

int find_text_in_text() {
    char* a = new char[100];
    char* b = new char[100];
        
    cout << "Text to find in: ";
    cin.getline(a, size_t(a));    
    cout << "\nText to find: ";
    cin.getline(b, size_t(b));
    
    int lengthA = get_length(a);
    int lengthB = get_length(b);
    
    for(int i = 0; i < lengthA; i++){
        if(a[i] == b[0]){
            int flag = 1;
            for(int j = 1; j < lengthB; j++){
                if(a[i + j] == b[j]){
                    flag++;
                } else {
                    break;
                }
            }
            
            if (flag == lengthB)
                cout << "\nCharacter at: " << i;
        }
    }
    return 0;
    
    delete [] a,b;
    a = b = NULL;
}

#endif /* FIND_TEXT_IN_TEXT_H */

