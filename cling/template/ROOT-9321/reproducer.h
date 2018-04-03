#ifndef REPRODUCER_H_
#define REPRODUCER_H_

#include <Rtypes.h>

namespace bdm {

struct Param {};

template <typename TParam>
class Top {
  ClassDef(Top, 1);
};

template <typename TParam = Param, template <typename> class TBase = Top>
class Middle : public TBase<TParam> {
  ClassDef(Middle, 1);
};

template <typename TParam = Param>
class Bottom : public Middle<TParam> {
  ClassDef(Bottom, 1);
 public:
  int data_ = 0;
};

}  // namespace bdm

#endif  //  REPRODUCER_H_
