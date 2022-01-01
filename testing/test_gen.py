
def create_test1():
    fp = open("test_1", "wb")
    x = 0
    while x <= 255:
        fp.write(x.to_bytes(1, byteorder='little'))
        x += 1
    fp.close()

create_test1()