/* 
인접리스트와 인접행렬 차이.

공간복잡도
인접행렬 : o(v^2)
인접리스트 : o(v+e)  

시간복잡도
* 간선 한개 찾기 
인접행렬 : o(1)
인접리스트: o(v)

* 모든 간선  찾기 
인접행렬 : o(v^2)
인접리스트 : o(v+e)  

따라서, 그래프가 희소할때는 인접리스트, 조밀할때는 인접행렬이 좋다. 
-> 인접행렬은 2차원배열을 만들어서 표기하기 때문에 희소할 경우에는 연결이 안된 경우가 많은데,
2차원 배열로 저장을 해야함. (메모리를 더 사용함) 

보통 알고리즘 문제에는 sparse한 그래프가 많이 나오기 때문에
인접리스트를 사용하는 경우가 많음. 

*/
