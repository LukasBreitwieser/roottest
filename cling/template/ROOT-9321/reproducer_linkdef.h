// some C++ header definition
#ifdef __ROOTCLING__
// turns off dictionary generation for all
#pragma link off all class;
#pragma link off all function;
#pragma link off all global;
#pragma link off all typedef;

#pragma link C++ class bdm::Top<bdm::Param>+;
#pragma link C++ class bdm::Middle<bdm::Param, bdm::Top>+;
#pragma link C++ class bdm::Bottom<bdm::Param>+;

#endif  // __ROOTCLING__
