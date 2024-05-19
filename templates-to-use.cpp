
//A- For int-bool.

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



//B- For int, double and int-bool(can use it for string-boolean when std::boolalpha is used.
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


//C- For char type.
        template <class T>
        T Input(const std::string& prompt){
            T value;
            while(true){
                std::cout << prompt;
                if(std::cin >> value && std::cin.get() == '\n'){
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