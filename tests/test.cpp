#include "pch.h"
#include "v_t.h"
TEST(MyValidator,validate_login) {
	MyValidator v;
  EXPECT_TRUE(v.validate_login(std::string("vika66")));
  EXPECT_FALSE(v.validate_login(std::string("Vika66")));
}
TEST(MyValidator, validate_pass) {
	MyValidator vo;
    EXPECT_TRUE(vo.validate_pass(std::string("Vi123456")));
    EXPECT_FALSE(vo.validate_pass(std::string("1234")));
}
