#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TraversalTest, ReturnsVectorofTree) {
  vector<int> v={8, 3 ,10 ,1 ,6 ,14 ,4 ,7, 13};
  BST s(v);
  vector<int> actual = s.TreeToVector();
  vector<int> expected = {8, 3, 10, 1 ,6, 14, 4 ,7 ,13};
  EXPECT_EQ(expected, actual);
}
/*TEST(FindTest, ReturnsTrue) {
  vector<int> v={8, 3 ,10 ,1 ,6 ,14 ,4 ,7, 13};
  BST s(v);
  int val=10;
  bool actual = s.find(val);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}
TEST(FindTest, ReturnsFalse) {
  vector<int> v={8, 3 ,10 ,1 ,6 ,14 ,4 ,7, 13};
  BST s(v);
  int val=0;
  bool actual = s.find(val);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}
TEST(EraseTest, ReturnsTrue) {
  vector<int> v={8, 3 ,10 ,1 ,6 ,14 ,4 ,7, 13};
  BST s(v);
  int val=14;
  bool actual = s.erase(val);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}
TEST(EraseTest, ReturnsFalse) {
  vector<int> v={8, 3 ,10 ,1 ,6 ,14 ,4 ,7, 13};
  BST s(v);
  int val=20;
  bool actual = s.erase(val);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}*/