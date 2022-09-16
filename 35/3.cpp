#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
int main()
{
  [](fs::path somePath, const std::string ext)
  {
    for(auto& p: std::filesystem::recursive_directory_iterator(somePath)) {
      if (!p.is_regular_file() || p.path().extension().compare(ext))
	continue;
      std::cout << p.path() << std::endl;
    }
  }("/home/ai/code/CPP/", ".cpp");
}
