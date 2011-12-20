int main () {
  static_assert (true, "You should never see that...");
  static_assert (false, "Compilation-Time assert works great !!");
  return 0;
}
