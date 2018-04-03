#include "reproducer.h"

#include <iostream>
#include <unistd.h>
#include <TFile.h>

template <typename T>
void Write(const char* root_file, const char* obj_name, const T& object,
           const char* mode = "new") {
  TFile file(root_file, mode);
  file.WriteObject(&object, obj_name);
  file.Close();
}

template <typename T>
void Read(const char* root_file, const char* obj_name, T*& object) {
  TFile file(root_file);
  file.GetObject(obj_name, object);
  file.Close();
}

const char* kRootFile = "bdm.root";

void reproducer() {
  gSystem->Load("ROOT-9321-dictionary");
  remove(kRootFile);

  bdm::Bottom<> a;
  a.data_ = 42;
  Write(kRootFile, "test", a);

  bdm::Bottom<>* read_a;
  Read(kRootFile, "test", read_a);
  std::cout << read_a->data_ << std::endl;
}
