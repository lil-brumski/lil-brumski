_A_

 template <class T>
        T Input(const std::string& prompt){
            T value;
            while(true){
                std::cout << prompt;
                if(std::cin >> value){
                    break;
                }
                else{
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cerr << "Wrong data type, try again!\n";
                }
            }
            return value;
         }               


_B_
     template <class T>
       T Input(const std::string& prompt) {
          T value;
          std::string input;
         while (true) {
            std::cout << prompt;
            std::getline(std::cin, input);
            std::istringstream stream(input);
            if (stream >> value && stream.eof()) {
                 break;
            } else {
                 std::cerr << "Wrong data type, try again!\n";
              }
        }
        return value;
     }