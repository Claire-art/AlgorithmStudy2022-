n = int(input()) #n값을 입력 받는다
n_list = list(map(int, input().split(' '))) #int형으로 맵핑해준다. ' '을 기준으로 원소들을 나누어준다.
n_list.sort() #오름차순으로 정렬한다. =>이진탐색은 정렬된 자료구조에서만 사용 가능하기 때문이다.

m = int(input()) #m값을 입력 받는다.
targets = list(map(int, input().split(' '))) #타겟 즉, 찾을 값을 입력 받는다.


def binary(target): #함수를 선언하고 파라미터는 타겟이다.
    left = 0  #변수 초기화
    right = n - 1 #오른쪽은 입력받은 n값에서 -1한 값

    while left <= right:  #왼쪽에서 탐색 시작한 값이 오른쪽 값과 같기전까지 반복한다. =>같다는 것은 타겟값을 찾았다는 의미니까
        mid = (left + right) // 2    #탐색을 시작할 값은 왼쪽,오른쪽 끝값의 중간값. //로 정수형으로 나오게 해준다
        if n_list[mid] == target:   #만약 리스트에서 중간값과 타겟값이 같다면 True를 반환
            return True

        if target < n_list[mid]:    #만약 타겟값이 중간값보다 작거나 크면 중간값을 조정해준다.
            right = mid-1
        elif target > n_list[mid]:
            left = mid + 1


for i in range(m):
    if binary(targets[i]):
        print(1)  #값이 있으면 1
    else:
        print(0) #없으면 0 
