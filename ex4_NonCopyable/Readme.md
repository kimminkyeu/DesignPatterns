### 참고 링크
https://dengking.github.io/programming-language/C%2B%2B/CppReference/Classes/Special-member-function/Copy/Non-copyable/

### 복사생성자를 막기 위한 방법
1. 복사 생성자를 private으로 선언하다. --> class 내부 구현시나, friend class에서 호출 가능하다.
2. 선언만 하고 정의를 안한다. --> 컴파일이 된다. 에러 발생 시점이 링킹할 때다.
3. 선언부에서 복사생성자에 =delete 을 붙힌다. --> C++11 이상 버전부터 가능, 컴파일 타임 에러 발생.
4. nonCopyable 클래스를 따로 만들어서 private으로 상속받는다. --> 컴파일 타임에 에러 발생, 가독성 명확! + 금지 구현을 간단히 할 수 있음.
 ---

### 결론 : 4번 방식이 가독성도 좋고, 구현도 깔끔. + 어떻게 구현하느냐 에 따라 C++ 지원 버전을 넓힐 수 있다.