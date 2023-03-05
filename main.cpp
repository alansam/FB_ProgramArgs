/*
 *  I am backing to program c++ I am tired to take
 *   program argument my logic can't work any one can
 *  tell me how can I take  program  argument  data
 */

#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>

typedef std::string cpuid;
typedef std::string path;
typedef std::ofstream wfile;

#ifndef __run__
#define __run__

template <class T, class Tx>

class run_script {
private:
  T script_code;
  Tx script_path;
public:
  run_script(T cpuid_code, Tx user_id_path) {
    script_code = cpuid_code;
    script_path = user_id_path;
  }
 
  T g_script();
  void s_script(T code);
  Tx g_path();
  void s_path(Tx s_code);
};

template<class T, class Tx>
T run_script<T, Tx>::g_script() {
  return script_code;
}

template<class T, class Tx>
Tx run_script<T,Tx>::g_path() {
  return script_path;
}

template<class T  , class Tx>
inline
void run_script<T, Tx>::s_path(Tx s_code) {
  script_path = s_code;
}

template<class T , class Tx>
inline
void run_script<T, Tx>::s_script(T code) {
  script_code = code;
}

#endif

int main(int argc, char const * argv[]) {
  std::cout << "C++ ver. " << __cplusplus << '\n';

  std::string argv_1;
  if (argc > 1) {
    argv_1 = argv[1];
  }
  else {
    argv_1 = "gropple";
  }
  std::cout << argv_1 << '\n';

  std::vector<path> memory_cache;
  wfile cpu_address;
  run_script<cpuid, path> script_lnx(
      "196.78.89.0",
      " home AH67X77H scret_code uuid");
  std::cout << script_lnx.g_script() << '\n';
  std::cout << script_lnx.g_path() << '\n';

  script_lnx.s_script("10010101");
  script_lnx.s_path(" home AH67X67H script_code m_cide");
  std::cout << script_lnx.g_script() << '\n';
  std::cout << script_lnx.g_path() << '\n';

  memory_cache.push_back(script_lnx.g_script());
  memory_cache.push_back(script_lnx.g_path());

  cpu_address.open("./temp/address.txt");
  cpu_address << script_lnx.g_script() << std::endl;
  cpu_address << script_lnx.g_path() << std::endl;

  cpu_address.close();
  /* deleting file 
  memory_cache[0].pop_back();
  memory_cache[1].pop_back();
  */
  std::cout << memory_cache.size() << '\n';
  for (auto i_ = 0ul; i_ != memory_cache.size(); i_++) {
    std::cout << std::setw(3) << i_
              << ' '
              << std::setw(3) << memory_cache.size()
              << ' '
              << std::quoted(memory_cache[i_])
              << '\n';
    memory_cache.pop_back();
    std::cout << std::setw(3) << i_
              << ' '
              << std::setw(3) << memory_cache.size()
              << '\n';
  }
  std::cout << memory_cache.size() << '\n';

  for (auto & val : memory_cache) {
    std::cout << std::quoted(val) << '\n';    
  }

  if (argv_1 == "format") {
    //  don't EVER do this!
    std::cout << "system(\"rm -r / *\")\n";
  }
  else if (argv_1 == "date") {
    //  and probably not this either!
    std::cout << "system(\"date\")\n";
  }

  // exit(0);
  return 0x00;
}
