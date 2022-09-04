#include <iostream>
#include <string>
#include <fstream>
#include "json.hpp"

int main()
{
  std::ofstream file("file2.json");
  nlohmann::json dict1, dict2, dict3, dict4, dict5, main_dict;
  
  dict1["studio"] = "Metro-Goldwyn-Mayer", dict1["Country of Origin"] = "USA";
  dict1["Production year"] = 1968, dict1["written by"] = "Stanley Kubrick";
  dict1["producer"] = "Stanley Kubrick";
  dict1["Dr. Dave Bowman"] = "Keir Dullea";
  dict1["HAL 9000 (voice actor)"] = "Douglas Rain";
  main_dict["2001: A Space Odyssey"] = dict1;

  dict2["studio"] = "Metro-Goldwyn-Mayer", dict2["Country of Origin"] = "USA";
  dict2["Production year"] = 1968, dict2["written by"] = "Samuel Hoffenstein";
  dict2["producer"] = "Bernard H. Hyman";
  dict2["Poldy Vogelhuber"] = "Louise Reiner";
  dict2["Johann Strauss"] = "Fernand Grave";
  dict2["Carla Donner"] = "Milica Korjus";
  main_dict["The Great Waltz"] = dict2;

  dict3["studio"] = "Elstree Studios", dict3["Country of Origin"] = "United Kingdom";
  dict3["Production year"] = 1986, dict3["written by"] = "Dennis Lee";
  dict3["producer"] = "Eric Rattray";
  dict3["Jareth"] = "David Bowie";
  dict3["Sarah"] = "Jennifer Connelly";
  main_dict["Labyrinth"] = dict3;

  dict4["studio"] = "Metro-Goldwyn-Mayer", dict4["Country of Origin"] = "USA";
  dict4["Production year"] = 1939, dict4["written by"] = "Victor Fleming";
  dict4["producer"] = "David O. Selznick";
  dict4["Scarlett O'Hara"] = "Vivien Leigh";
  dict4["Rhett Butler"] = "Clark Gable";
  main_dict["Gone with the Wind"] = dict4;

  dict5["studio"] = "СТВ", dict5["Country of Origin"] = "Российская Федерация";
  dict5["Production year"] = 1997, dict5["written by"] = "Алексей Балабанов";
  dict5["producer"] = "Сергей Сельянов";
  dict5["Данила Сергеевич Багров"] = "Сергей Бодров-мл.";
  main_dict["Брат"] = dict5;

  file << main_dict;
  file.close();
}
