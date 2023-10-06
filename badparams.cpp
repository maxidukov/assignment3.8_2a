#pragma once
#include <iostream>
#include "badparams.h"

BadParams::BadParams(std::string cause, std::string fig): cause(cause), fig(fig){
      //this->cause = cause;
}
const char* BadParams::what() const noexcept { //override
      return "Ошибка создания фигуры";
}
std::string BadParams::what_exact(){
  std::string start = ""; // NEEDE TO START CONCAT, OR ELSE what() + "\"" WON'T CONCAT
  std::string figform = fig != "" ? " \"" + fig + "\"" : "";
  return start + what() + figform + ". Причина: " + cause + "\n";
}
