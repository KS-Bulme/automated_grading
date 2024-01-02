from sum_to import sum_to

def test_sum_to():
    assert sum_to(0) == 0
    assert sum_to(25) == 325
    assert sum_to(26) == 351
    assert sum_to(500000000) == 125000000250000000

def test_sum_to_slow():
    assert sum_to(4294967295) == 9223372034707292160
