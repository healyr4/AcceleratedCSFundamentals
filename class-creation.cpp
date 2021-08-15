/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
 * Implement its member functions below.
 */

Pair::Pair(int a, int b){
  pa = new int(a);
  pb = new int(b);
  std::cout << "This is from the constructor\n";
}


Pair::Pair(const Pair& other){
  pa = new int(*other.pa);
  pb = new int(*other.pb);
  std::cout << "This is from the copy constructor\n";
}


Pair::~Pair(){
  delete pa;
  delete pb;
  std::cout << "Deconstructor...\n";
}



 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
  
int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;
  return 0;
}
