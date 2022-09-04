#include <iostream>
#include <string>
#include <fstream>
#include "json.hpp"
int main()
{
  std::ofstream file("file.json");
  nlohmann::json dict;
  dict["movie title"] = "2001: A Space Odyssey";
  dict["studio"] = "Metro-Goldwyn-Mayer";
  dict["Country of Origin"] = "USA", dict["Production year"] = 1968;
  dict["written by"] = "Stanley Kubrick", dict["producer"] = "Stanley Kubrick";
  dict["Dr. Dave Bowman"] = "Keir Dullea", dict["HAL 9000 (voice actor)"] = "Douglas Rain";
  file << dict;
}

