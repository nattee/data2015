
class Student {
public:
  std::string name;
  std::string ID;
  float  GPA;

  bool first_honor() {
    return GPA >= 3.60;
  }

  int get_year() {
    return stoi(ID.substr(0,2))+2500;
  }

  bool same_year(Student b) {
    return this->get_year() == b.get_year();
  }
};

