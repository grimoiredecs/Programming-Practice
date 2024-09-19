def func1(f):
    def wrapper(*args, **kwargs):
       print("Start")
       return f(*args, **kwargs)
       print("Finished")
    return wrapper


@func1
def expo(a=10, b = 455):
    print("beatles")
    return (a**b)
@func1
def outing(a,b):
    print(expo(a,b))

k = outing(122,23)
print(k)
